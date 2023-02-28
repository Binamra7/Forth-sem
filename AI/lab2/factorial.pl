clauses:

start.

factorial(0,1).
factorial(N ,F):- N>0,
                  D is N-1,
                  factorial(D, E),
                  F is N*E.
