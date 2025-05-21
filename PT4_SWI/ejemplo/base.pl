cons(First, Second, pair(First, Second)).
car(pair(First, _), First).
cdr(pair(_, Second), Second).
is_null(nil).


%[].
%[1,a].
%[b,3,foo(bar)].
% usando pipe (|)

contains([Item|_Rest], Item).
contains([_First|Rest], Item) :- contains(Rest,Item).