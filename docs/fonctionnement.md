# Fonctionnement

Le prototype repose sur trois éléments principaux :

- **Arduino** : traite les mesures et commande le système.
- **HC-SR04** : mesure la distance d'un objet ou d'un véhicule.
- **Servomoteur** : transforme la commande électrique en mouvement mécanique du levier.

Lorsque la distance mesurée est inférieure au seuil défini dans le programme, Arduino ouvre la barrière à environ 90°. Après 5 secondes, elle revient à sa position fermée.

Ce fonctionnement est volontairement simple afin de constituer une base facilement extensible.
