#include <iostream>
#include <mutex>
#include <fstream>
#include <cstring>

std::mutex logMutex;

bool fileExists(std::string& fileName) {
    return static_cast<bool>(std::ifstream(fileName));
}

template <typename filename, typename T1, typename T2, typename T3, typename T4>
bool writeCsvFile(filename &fileName, T1 coluna1, T2 coluna2, T3 coluna3, T4 coluna4) {
    std::lock_guard<std::mutex> csvLock(logMutex);
    std::fstream file;
    file.open (fileName, std::ios::out | std::ios::app);
    if (file) {
        file << "\"" << coluna1 << "\",";
        file << "\"" << coluna2 << "\",";
        file << "\"" << coluna3 << "\"";
        file << "\"" << coluna4 << "\"";
        file <<  std::endl;
        return true;
    } else {
        return false;
    }
}

int main() {
    std::string csvFile = "registrocam.csv";
    std::string naam = "Olah";
    char campo1[10];
    strcpy(campo1,"NOME");
    if(!fileExists(csvFile))
        writeCsvFile(csvFile, campo1, "header2", "header3");

        if (!writeCsvFile(csvFile, 0, naam, static_cast<float>(0 * 3.5))) {
            std::cerr << "Failed to write to file: " << csvFile << "\n";
        }
    return 0;
}
