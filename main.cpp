#include <iostream>
#include <fstream>
#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"

int main() {
  
  input x;
  x.inputData();

  proses y;
  y.prs();
  y.toFile();

  output z;
  z.cetak();

  return 0;
}