import Foundation

func solution(_ num_list:[Int], _ n:Int) -> [Int] {
    let front = Array(num_list[0..<n])
    let back = Array(num_list[n..<num_list.count])
    return back + front
}
