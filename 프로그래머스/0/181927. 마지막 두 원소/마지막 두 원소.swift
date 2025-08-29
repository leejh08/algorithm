import Foundation

func solution(_ num_list:[Int]) -> [Int] {
    var result = num_list
    let last = num_list[num_list.count - 1]
    let prev = num_list[num_list.count - 2]
    
    if last > prev {
        result.append(last - prev)
    } else {
        result.append(last * 2)
    }
    
    return result
}
