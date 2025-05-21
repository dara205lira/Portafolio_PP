% Hechos
parent(simon, pedro).
parent(simon, raj).
male(pedro).
male(raj).

% Reglas
brother(X, Y) :-
    parent(Z, X),
    parent(Z, Y),
    male(X),
    male(Y),
    X \= Y.  % Para evitar que alguien sea su propio hermano
