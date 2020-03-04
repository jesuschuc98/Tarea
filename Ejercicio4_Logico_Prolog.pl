%suma de dos variables
suma:- write('escribe un numero '),
    read(A),
    write('escribe otro numero '),
    read(B),
    C is A+B,
    format('el resultado es: ~w',[C]).
