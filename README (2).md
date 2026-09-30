# 🚧 Système de levier de barrière automatique

Projet de prototype d'une barrière automatique commandée par microcontrôleur.

> **Note :** ce dépôt est une reconstruction du projet à partir de son concept, les fichiers originaux ayant été perdus. Le code fourni constitue une base fonctionnelle de démonstration et peut être adapté au matériel réellement utilisé.

## 🎯 Objectif

Le système permet de commander automatiquement l'ouverture et la fermeture d'une barrière à l'aide d'un servomoteur et d'un capteur ultrasonique.

### Fonctionnement

1. Le capteur détecte un véhicule devant la barrière.
2. Le microcontrôleur commande le servomoteur.
3. La barrière se lève.
4. Après quelques secondes, la barrière redescend automatiquement.
5. Une LED indique l'état du système.

## 🧰 Matériel possible

- Arduino Uno
- Servomoteur
- Capteur ultrasonique HC-SR04
- LED rouge
- LED verte
- Résistances 220 Ω
- Barrière/levier mécanique
- Câbles Dupont
- Plaque d'essai

## 📁 Structure

```text
levier-barriere/
├── src/
│   └── barriere_automatique.ino
├── docs/
│   └── fonctionnement.md
├── images/
│   └── README.md
├── .gitignore
├── LICENSE
└── README.md
```

## ⚙️ Connexions proposées

| Composant | Arduino |
|---|---|
| Servo signal | D9 |
| HC-SR04 Trig | D7 |
| HC-SR04 Echo | D6 |
| LED verte | D4 |
| LED rouge | D5 |
| GND | GND |
| Alimentation | 5V |

⚠️ Pour un servomoteur puissant, utiliser une alimentation externe adaptée et relier les masses (GND) correctement.

## 🚀 Installation

1. Installer Arduino IDE.
2. Ouvrir `src/barriere_automatique.ino`.
3. Sélectionner la carte Arduino.
4. Sélectionner le port USB.
5. Téléverser le programme.

## 🔮 Améliorations possibles

- Ajout d'un lecteur RFID.
- Ajout d'un écran LCD/OLED.
- Ajout d'un bouton d'ouverture manuelle.
- Détection de fin de course.
- Connexion Wi-Fi avec ESP32.
- Enregistrement des passages.
- Application mobile ou tableau de bord.

## 👤 Projet

Projet de prototypage électronique et automatisation.
