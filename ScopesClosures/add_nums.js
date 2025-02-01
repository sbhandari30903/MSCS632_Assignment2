function outerFunction(x) {
    let message = `Outer Funnction! x = ${x}`;
    console.log(message)
    function innerFunction(y) {
        console.log(message);
        console.log(`Sum of x and y: ${x + y}`); // can access x from outer function
    }

    return innerFunction;
}

const closure = outerFunction(5);
closure(10);