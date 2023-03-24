#include <iostream>
#include <cstring>

int main() {
    const char* song = "Sofia";
    const char* artist = "Clairo";

    std::cout << "Song: " << song << std::endl;
    std::cout << "Artist: " << artist << std::endl;

    // Baranje dolzhina na imeto na artistot
    int length = strlen(artist);

    // Premestuvanje na pokazhuvachot do artistot
    artist += length + 1;

    // Na konzolata se pechati prviot karakter i adresata
    std::cout << "First character: " << *artist << std::endl;
    std::cout << "Address of first character: " << static_cast<const void*>(artist) << std::endl;

    return 0;
}
