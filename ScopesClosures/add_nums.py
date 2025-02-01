def outer_function(x):
    message = f"Outer Funnction! x = {x}"
    print(message)
    def inner_function(y):
        print(message)
        print(f"Sum of x and y: {x + y}")  # can access x from outer function

    return inner_function

closure = outer_function(5)
closure(10)
