/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function (arr, fn) {
  let ans = [];
  for (let i = 0; i < arr.length; i++) {
    ans[i] = fn(arr[i], i);
  }
  return ans;
};

// beats 100% memory and 65.77% runtime
// https://leetcode.com/problems/apply-transform-over-each-element-in-array/submissions/1089746716/?gio_link_id=noqbNOv9
