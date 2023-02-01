function heap_sort(array, size) {
  function sift_down(start, end) {
    let root = start;
    while (root * 2 + 1 <= end) {
      let child = root * 2 + 1;
      let swap = root;
      if (array[swap] < array[child]) {
        swap = child;
      }
      if (child + 1 <= end && array[swap] < array[child + 1]) {
        swap = child + 1;
      }
      if (swap === root) {
        return;
      } else {
        [array[root], array[swap]] = [array[swap], array[root]];
        root = swap;
      }
    }
  }

  let start = Math.floor(size / 2 - 1);
  let end = size - 1;
  while (start >= 0) {
    sift_down(start, end);
    start--;
  }
  while (end >= 0) {
    [array[end], array[0]] = [array[0], array[end]];
    end--;
    sift_down(0, end);
  }
}

