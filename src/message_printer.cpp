#include "message_printer.h"
#include <iostream>

MessagePrinter::MessagePrinter(const std::string& message) : message_(message) {}

void MessagePrinter::print() const {
    std::cout << "Сообщение: " << message_ << std::endl;
}

MessagePrinter::~MessagePrinter() {}