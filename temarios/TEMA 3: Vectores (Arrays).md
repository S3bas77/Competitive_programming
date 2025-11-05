📋 TEMA 3: Vectores (Arrays)

🔹 Declaración e Inicialización

    Declaración básica: vector<tipo> nombre;

    Con tamaño inicial: vector<tipo> nombre(tamaño);

    Con tamaño y valor inicial: vector<tipo> nombre(tamaño, valor);

    Inicialización con valores: vector<tipo> nombre = {val1, val2, val3};

    Vectores multidimensionales: vector<vector<tipo>> nombre;

🔹 Acceso y Modificación

    Acceso por índice: vector[i] (índices de 0 a n-1)

    Modificar elemento: vector[i] = nuevo_valor;

    Método at(): vector.at(i) (con verificación de límites)

🔹 Recorrido de Vectores

    Con for tradicional:

cpp

for (int i = 0; i < vector.size(); i++) {
    cout << vector[i] << " ";
}

    Con for basado en rango:

cpp

for (auto elemento : vector) {
    cout << elemento << " ";
}

    Con iteradores (avanzado, pero útil conocer)

🔹 Operaciones Principales

    Tamaño: vector.size()

    Agregar al final: vector.push_back(valor)

    Eliminar del final: vector.pop_back()

    Insertar en posición: vector.insert(posición, valor)

    Eliminar de posición: vector.erase(posición)

    Vaciar vector: vector.clear()

    Ver si está vacío: vector.empty()

🔹 Algoritmos Comunes con Vectores

    Buscar elemento máximo/minimo en un vector

    Sumar/acumular todos los elementos

    Contar elementos que cumplen condición

    Buscar elemento específico en el vector

    Ordenar vector: sort(vector.begin(), vector.end())