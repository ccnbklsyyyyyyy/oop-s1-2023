#ifndef USB_CONNECTION_H
#define USB_CONNECTION_H

#include <stack>

class USBConnection {
private:
    int id;
    static std::stack<int> ids;

    USBConnection(int id) : id(id) {}

public:
    static USBConnection* CreateUsbConnection() {
        if (!ids.empty()) {
            int newId = ids.top();
            ids.pop();
            return new USBConnection(newId);
        } else {
            return nullptr;
        }
    }

    ~USBConnection() {
        ids.push(id);
    }

    int get_id() const {
        return id;
    }
};

std::stack<int> USBConnection::ids({3, 2, 1});

#endif // USB_CONNECTION_H
