service CVRPSolver {

  list<list<i64>> solveCVRP(1:list<list<i64>> vec, 2:list<i64> demands, 3:list<i64> v_caps) 

  list<list<i64>> solveCVRPTW(1:list<list<i64>> vec, 2:list<i64> demands, 3:list<i64> v_caps, 4:list<list<i64>> timeWindows , 5:list<i64> serviceTime)

  list<list<i64>> solveCVRPTWMD(1:list<list<i64>> vec, 2:list<i64> demands, 3:list<i64> v_caps, 4:list<list<i64>> timeWindows , 5:list<i64> serviceTime, 6:list<list<i64>> depots)

  list<list<i64>> solveCVRPTWPD(1:list<list<i64>> vec, 2:list<i64> demands, 3:list<i64> v_caps, 4:list<list<i64>> timeWindows , 5:list<i64> serviceTime,  6:list<i64> pickups, 7:list<i64> delivs)

}
