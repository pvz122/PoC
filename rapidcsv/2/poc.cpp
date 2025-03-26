#include "rapidcsv.h"

int main() {
  rapidcsv::Document doc("./poc.csv");
  std::vector<int> columnData = {1, 2, 3};
  doc.InsertColumn(2, columnData, "ColumnName");

  return 0;
}