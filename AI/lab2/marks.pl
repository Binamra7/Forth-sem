clauses:

start.

calculate:- write("Enter marks of 1st subject"), read(A),
            write("Enter marks of 2st subject"), read(B),
            write("Enter marks of 3st subject"), read(C),
            write("Enter marks of 4st subject"), read(D),
            write("Enter marks of 5st subject"), read(E),

            PERCENT is (A+B+C+D+E)/5,
            write("The percentage is: "), write(PERCENT), write("%"),nl, grade(PERCENT,_G).

grade(PERCENT,G):- PERCENT>=90, G = "Secured A Grade", write(G);
                   PERCENT>=80, G = "Secured B Grade", write(G);
                   PERCENT>=70, G = "Secured C Grade", write(G);
                   PERCENT>=60, G = "Secured D Grade", write(G);
                   PERCENT>=40, G = "Secured E Grade", write(G);
                   G = "Failed", write(G).

