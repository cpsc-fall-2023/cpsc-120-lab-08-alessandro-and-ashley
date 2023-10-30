// Ashley Alvarado
// AshleyAlvarado@csu.fullerton.edu
// @AshleyAlvar
// Partners: @alegarcia4

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number \n";
    return 1;
  }

  bool zero{true};
  double sum{0.00000};
  for (std::string& argue : arguments) {
    if (zero) {
      zero = false;
      continue;
    }
    sum += std::stod(argue);
  }

  double average{sum / (static_cast<int>(arguments.size()) - 1)};

  std::cout << "average = " << average << "\n";

  return 0;
}
