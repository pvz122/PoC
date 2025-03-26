#include <tiffio.h>

int main() {
    TIFF *tif = TIFFOpen("./poc.input", "r");
    if (!tif) {
        return 1;
    }
    TIFFSetDirectory(tif, 0);
    TIFFCreateDirectory(tif);
    TIFFClose(tif);
    return 0;
}