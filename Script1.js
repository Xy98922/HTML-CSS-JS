// JavaScript source code
var res = [];

var subsets = function (nums) {
    let length = nums.length;
    let n = 1;
    let trans = [];
    while (n <= nums.length) {
        dfs(n, nums, trans);
        n++;
    }
    return res;
};
function dfs(n, nums, trans) {
    if (trans.length == n) {
        res.push(trans);
        return;
    }
    for (let i = 0; i < nums.length; i++) {
        trans.push(nums[i]);
        nums = nums.slice(1);   //删除看看是否有影响
        dfs(n, nums, trans);
        trans.pop();
    }

}

