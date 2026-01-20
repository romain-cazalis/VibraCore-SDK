#ifndef VIBRACORE_H
#define VIBRACORE_H

extern "C" {
    // Structure de résultat simple
    typedef struct {
        double rms;
        double kurtosis;
        int health_score; // 0=OK, 1=Warning, 2=Danger
    } VC_Result;

    // Fonctions exportées
    VC_Result vc_analyze_vibration(const double* signal, int length);
}

#endif