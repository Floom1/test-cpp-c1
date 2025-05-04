#include <string>

class MessagePrinter {
public:
    MessagePrinter(const std::string& message);
    void print() const;
    ~MessagePrinter();

private:
    std::string message_;
};