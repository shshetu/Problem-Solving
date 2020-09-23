

// create a function upto number of ratation number
function rotateUptoNumOfRotation(array,numOfRotation) {
  while(numOfRotation>0) {
    array.push(array.shift());
    numOfRotation--;
  } 
  return array;
}

// print the array
function printArray(array) {
 for (let i = 0; i < array.length; i++) {
   console.log(" "+array[i]);
 }
}

var array = [1, 2, 3, 4, 5, 6, 7];
//   console.log(array);
var numOfRoation = 2;
printArray(rotateUptoNumOfRotation(array, numOfRoation));
