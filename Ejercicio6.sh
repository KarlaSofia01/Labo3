#!/bin/bash

# Navega a cada subdirectorio de src, compila y ejecuta cada programa C, luego limpia
for dir in ejercicio{1..5}; do
    echo "Compilando y ejecutando $dir..."
    cd $dir
    gcc -o programa ${dir}.c
    if [ -f ./programa ]; then
        ./programa
        echo "Eliminando binario..."
        rm programa
    else
        echo "Error: No se pudo crear el binario para $dir."
    fi
    cd ..
done