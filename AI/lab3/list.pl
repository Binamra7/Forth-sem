clause:

start.
print_list([H|T]):-write(H), write(", "),print_list(T).
