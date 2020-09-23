function rotateOnce(array, size) {
  let temp = array[0];
  for (let i = 0; i < size - 1; i++) {
    array[i] = array[i + 1];
  }
  array[size - 1] = temp;
}