#include <string>

namespace log_line {
std::string message(std::string line) {
  // return the message
  auto i = line.find(" ");
  return line.substr(i + 1);
}

std::string log_level(std::string line) {
  // return the log level
  auto i = line.find("]");
  return line.substr(1, i - 1);
}

std::string reformat(std::string line) {
  // return the reformatted message
  return message(line) + "(" + log_level(line) + ")";
}
} // namespace log_line
