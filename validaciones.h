

/** \brief Valida mediante iteracion que el caracter ingresado se encuentre entre
 *         los valores 48 y 57 inclusive de la tabla ASCII.
           Si el valor esta fuera de estos parametros se pide el reingreso del caracter
 * \param opcionMenu: valor del tipo char que representa un caracter
 * \return opcionMenu: valor de tipo char que cumple con los parametros de la funcion
 *
 */
char validarMenu (char opcionMenu);


/** \brief Valida mediante iteracion que el numero ingresado sea diferente de 0 (cero).
 *         Si es igual a 0, llama a la funcion pedirNumero() para que el usuario reingrese el valor
 * \param numeroB: valor de tipo float que representa el divisor de una division
 * \return numeroB: valor de tipo float que cumple con los parametros de la funcion
 *
 */
float validarCero (float numeroB);


/** \brief Valida mediante iteracion que el numero ingresado sea diferente de 0 (cero) y positivo.
 *          Si es igual o menor a 0, llama a la funcion pedirNumero() para que el usuario
 *          reingrese el valor
 * \param numeroA: valor de tipo float que representa un numero a factorizar
 * \return numeroA: valor de tipo float que cumple con los parametros de la funcion
 *
 */
float validarEntPos (float numeroA);

