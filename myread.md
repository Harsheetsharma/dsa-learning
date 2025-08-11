// if (nums[start] != nums[left] != nums[right])
// {
// cout << "[" << nums[start] << " "
// << nums[left] << " "
// << nums[right] << "]" << endl;
// }
// else if (nums[start] != nums[start - 1] && nums[right] != nums[right + 1])
// {
// cout << "[" << nums[start] << " "
// << nums[left] << " "
// << nums[right] << "]" << endl;
// }

//here hte above code is wrong

//here the below code also shows right answer in 3 sum unique problem level=hard

if (left < right && nums[left] == nums[left + 1])
// {
// left++;
// }
// if (right > left && nums[right] == nums[right - 1])
// {
// right--;
// }
// left++;
// right--;
