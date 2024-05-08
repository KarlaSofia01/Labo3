printf("Ingresa una cadena (menos de 20 caracteres): ");
    scanf("%19s", cadena);

    while (cadena[indice]) {
        char caracter = tolower(cadena[indice]);
        if (isdigit(caracter))
            digitos++;
        else if (isalpha(caracter)) {
            if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
                vocales++;
            else
                consonantes++;
        }
        indice++;
    }

    printf("Vocales: %d\n", vocales);
    printf("Consonantes: %d\n", consonantes);
    printf("Digitos: %d\n", digitos);

    return 0;
}
