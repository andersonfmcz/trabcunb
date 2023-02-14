#include <iostream>
#include <mutex>
#include <fstream>

std::mutex logMutex;

bool fileExists(std::string& fileName) {
    return static_cast<bool>(std::ifstream(fileName));
}

template <typename filename, typename T1, typename T2, typename T3, typename T4>
bool addArqCSV(filename &fileName, T1 coluna1, T2 coluna2, T3 coluna3, T4 coluna4) {
    std::lock_guard<std::mutex> csvLock(logMutex);
    std::fstream file;
    file.open (fileName, std::ios::out | std::ios::app);
    if (file) {
        file << "\"" << coluna1 << "\",";
        file << "\"" << coluna2 << "\",";
        file << "\"" << coluna3 << "\",";
        file << "\"" << coluna4 << "\"";
        file <<  std::endl;
        return true;
    } else {
        return false;
    }
}

int main() {
    std::string csvFile = "registrocam.csv";
    if(!fileExists(csvFile))
        addArqCSV(csvFile, campo1, "Data", "Local", "pathImg");

        if (!addArqCSV(csvFile, "conhecido", "13_02_2023", "Sala", "/arquivos/alisson")) {
            std::cerr << "Failed to write to file: " << csvFile << "\n";
        }
    return 0;
}
