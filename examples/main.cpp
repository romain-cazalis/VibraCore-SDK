#include <iostream>
#include <vector>
#include "../include/VibraCore.h"

int main() {
    // 1. Simulation de données : un signal avec un choc anormal (pic à 5.0)
    // Dans la réalité, ces données viendraient d'un capteur.
    std::vector<double> sample_data = {
        0.1, 0.2, -0.1, 0.05,  5.0,  0.1, 
       -0.2, 0.1,  0.0, -0.05, 4.8, -0.1
    };

    std::cout << "--- VIBRACORE SDK : TEST DE DIAGNOSTIC ---" << std::endl;

    // 2. Appel de ta librairie C++
    VC_Result result = vc_analyze_vibration(sample_data.data(), sample_data.size());

    // 3. Affichage des résultats
    std::cout << "Indice RMS (Energie) : " << result.rms << std::endl;
    std::cout << "Indice Kurtosis (Chocs) : " << result.kurtosis << std::endl;

    // 4. Interprétation du score de santé
    std::cout << "Statut de la machine : ";
    if (result.health_score == 2) {
        std::cout << "DANGER (Roulement endommagé)" << std::endl;
    } else if (result.health_score == 1) {
        std::cout << "ATTENTION (Usure détectée)" << std::endl;
    } else {
        std::cout << "OK (Fonctionnement normal)" << std::endl;
    }

    return 0;
}