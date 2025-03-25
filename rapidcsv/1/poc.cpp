#include "rapidcsv.h"

int main() {
    rapidcsv::Document doc("./poc.csv");
    doc.RemoveColumn(6);
    doc.RemoveColumn(0);
    return 0;
}