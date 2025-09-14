import Foundation

func solution(_ a: Int, _ b: Int) -> Int {

    let concatenated = Int("\(a)\(b)")!
    

    let product = 2 * a * b
    

    return max(concatenated, product)
}
