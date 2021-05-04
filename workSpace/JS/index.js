//console.log('Hola Mundo');

// Tipos de datos en JS
// Undefined.
// Object: objeto.

// Definición de variables
// var
// let
// const

// var miPrimeraVariable = 'lala'

let laVariablePrimera = 'Mi primera variable!';
// console.log(laVariablePrimera);

// mutabilidad
laVariablePrimera = 'Esto ha cambiado'
// console.log(laVariablePrimera);

let miBoolean = true;
let miOtroBool = false;

let miNumero = 0
let miNumero2 = 12
let miNumero3 = -258
// console.log(miNumero, miNumero2, miNumero3, miBoolean, miOtroBool);

let Undef
// console.log(Undef)

let nulo = null;
// sconsole.log(nulo);

// Objeto vacío
const miPrimerObjeto = {

}
// Objeto agrupaciones de datos que hacen sentido entre si
const miObjeto = {
    unNumero: 12,
    unString: 'Esta cadena de caracteres',
    unaCondicion: true,
}

//console.log(miObjeto.unString)

const arrVacio = []
const arr = [1, 2, "hola", miObjeto]

//console.log(arrVacio, arr)

arrVacio.push(5)
arrVacio.push(3)
arrVacio.push(2)
arrVacio.push('holi')
arrVacio.push(miPrimerObjeto)

//console.log(arrVacio)

let num = 5;

//num++
//num++
//num++
//num++
//num++

num += 5

//console.log(num)

//igualdad estricta

const sal = 5 === 6;

//igualdad no estricta

const sal2 = 5 == '5';


const sal3 = 5 < '6';

const sal4 = 5 !== '5';
const sal5 = 5 != '5';

//or ||, and &&, not !

const resultadoOr = false || false
const resultadAnd = false && false

//console.log(resultadoOr)

// control de flujo

if(false){
    console.log("soy una patata tonta")
}

//control de flujo: while

let x = 5

while (x < 5){
    console.log(x);
    x++;
}

// control de flujo: switch
/*
switch ('a') {
    case 1:{
        console.log("yo soy 1")
        break;
    }
    case 2:{
        console.log("yo soy 2")
        break;
    }
    case 3:
        console.log("yo soy 3")
        break;
    default:
        //console.log("putos todos")
        break;
}
const numeros = [1, 2, 'hola', 4, 5]

for (let i = 0; i < numeros.length; i++){
    console.log(numeros[i])
}


const numeros = [1, 2, 'hola', 4, 5]

const nombres = ['sombra', 'tulio', 'marco']

function iterar(x) {
    for (let i = 0; i < x.length; i++){
        console.log(x[i])
    }
}

iterar(numeros)
iterar(nombres)

function suma (a, b){
    return a + b;
}

const resultado1 = suma(1, 2)
const resultado2 = suma(5, 6)
const resultado = suma(resultado1, resultado2)

console.log('el resultado es: ', resultado)

function sumar(a, b, cb) {
    const r = a + b;
    cb(r)
}

function callback(result) {
    console.log('resultado =', result)
}

sumar(2, 3, callback)
*/

// fat arrow functions

//const miFatArrowFunction = (a, b) => a + b;

function suma (a, b){
    return a + b;
}

sumar(2, 3, function () {})































