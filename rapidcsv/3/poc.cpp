#include "rapidcsv.h"

int main() {
    rapidcsv::Document doc("./poc.csv");
    doc.RemoveColumn(34);
    doc.RemoveColumn(0);
    doc.Save("./save.csv");
    return 0;
}