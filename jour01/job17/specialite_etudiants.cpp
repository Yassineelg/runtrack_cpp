#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <iomanip>
#include <array>

class Specialite {
public:
    enum Type {
        IA,
        Web,
        Logiciel,
        SystemeImmersif,
        Cybersecurite
    };

    static const std::array<std::string, 5> specialiteNames;

    Specialite(Type type, int etudiants)
            : type(type), etudiants(etudiants) {}

    void afficher() const {
        int placesDisponibles = MAX_ETUDIANTS_PAR_SPECIALITE - etudiants;
        std::cout << std::left << std::setw(20) << specialiteNames[type]
                  << std::setw(10) << etudiants
                  << std::setw(10) << placesDisponibles << std::endl;
    }

    static const int MAX_ETUDIANTS_PAR_SPECIALITE = 66;
private:
    Type type;
    int etudiants;
};

const std::array<std::string, 5> Specialite::specialiteNames = {
        "IA",
        "Web",
        "Logiciel",
        "Systeme Immersif",
        "Cybersecurite"
};

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());

    std::vector<Specialite> specialites;
    for (int i = Specialite::IA; i <= Specialite::Cybersecurite; i++) {
        std::uniform_int_distribution<> dis(12, Specialite::MAX_ETUDIANTS_PAR_SPECIALITE);
        int etudiants = dis(gen);
        specialites.push_back(Specialite(static_cast<Specialite::Type>(i), etudiants));
    }

    std::cout << std::left << std::setw(20) << "Specialite"
              << std::setw(10) << "Etudiants"
              << std::setw(10) << "Places restantes" << std::endl;
    std::cout << std::setfill('-') << std::setw(46) << "-" << std::endl;
    std::cout << std::setfill(' ');

    for (const auto &specialite: specialites) {
        specialite.afficher();
    }

    return 0;
}