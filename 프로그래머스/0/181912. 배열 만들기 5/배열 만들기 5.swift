import Foundation

func solution(_ intStrs: [String], _ k: Int, _ s: Int, _ l: Int) -> [Int] {
    return intStrs
        .map { String($0.dropFirst(s).prefix(l)) }
        .compactMap { Int($0) }
        .filter { $0 > k }
}
