% Hechos de género
female(pam).
female(liz).
female(pat).
female(ann).
male(jim).
male(bob).
male(tom).
male(peter).

% Hechos de padres
parent(pam,bob).
parent(tom,bob).
parent(tom,liz).
parent(bob,ann).
parent(bob,pat).
parent(pat,jim).
parent(bob,peter).
parent(peter,jim).

% Relaciones
mother(X,Y) :- parent(X,Y), female(X).
father(X,Y) :- parent(X,Y), male(X).
sister(X,Y) :- parent(Z,X), parent(Z,Y), female(X), X \== Y.
brother(X,Y) :- parent(Z,X), parent(Z,Y), male(X), X \== Y.

% Consulta ejemplo: 
% ¿Quiénes son las hermanas de X? 
% sister(X, Y).