# VibraCore SDK v1.0 - Maintenance Prédictive

VibraCore est une bibliothèque C++ haute performance conçue pour l'analyse vibratoire en temps réel sur les systèmes embarqués et industriels (Edge Computing).

## 🚀 Caractéristiques
- **Algorithmes :** Calcul RMS et Kurtosis ultra-rapide.
- **Performance :** Optimisé pour processeurs x86_64 et ARM (Apple Silicon).
- **Zéro Dépendance :** Pas besoin d'installer de librairies tierces.
- **Interopérabilité :** Interface C standard compatible avec Python, C#, et LabVIEW.

## 📁 Structure du SDK
- `/include` : Fichier d'en-tête `VibraCore.h`.
- `/lib` : Bibliothèque dynamique `libvibracore.dylib`.
- `/examples` : Exemple d'implémentation en C++.

## 💻 Intégration Rapide (C++)

```cpp
#include "VibraCore.h"

// Vos données accéléromètre
double signal[] = {0.1, 0.5, 1.2, ...}; 

// Analyse immédiate
VC_Result res = vc_analyze_vibration(signal, 1024);

if (res.health_score == 2) {
    // Déclencher une alerte de maintenance
}