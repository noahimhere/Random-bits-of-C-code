#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>

const int donut_size = 10;

void print_donut(int angle) {
  double radians = angle * M_PI / 180;
  for (int y = -donut_size; y <= donut_size; y++) {
    for (int x = -donut_size; x <= donut_size; x++) {
      double distance = std::sqrt(x * x + y * y);
      if (distance > donut_size - 0.5 && distance < donut_size + 0.5) {
        std::cout << "*";
      } else if (distance < donut_size - 1.5 || distance > donut_size + 1.5) {
        std::cout << " ";
      } else {
        double offset = std::atan2(y, x) + radians;
        char symbol = '.';
        if (offset >= 0 && offset < M_PI / 4) symbol = '.';
        if (offset >= M_PI / 4 && offset < M_PI / 2) symbol = 'o';
        if (offset >= M_PI / 2 && offset < 3 * M_PI / 4) symbol = 'O';
        if (offset >= 3 * M_PI / 4 && offset < M_PI) symbol = '0';
        if (offset >= M_PI && offset < 5 * M_PI / 4) symbol = 'O';
        if (offset >= 5 * M_PI / 4 && offset < 3 * M_PI / 2) symbol = 'o';
        if (offset >= 3 * M_PI / 2 && offset < 7 * M_PI / 4) symbol = '.';
        if (offset >= 7 * M_PI / 4 && offset < 2 * M_PI) symbol = ' ';
        std::cout << symbol;
      }
    }
    std::cout << std::endl;
  }
}

int main() {
  int angle = 0;
  while (true) {
    print_donut(angle);
    angle = (angle + 1) % 360;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << "\033[F\033[F\033[F\033[F\033[F\033[F\033[F\033[F\033[F\033[F";
  }
  return 0;
}