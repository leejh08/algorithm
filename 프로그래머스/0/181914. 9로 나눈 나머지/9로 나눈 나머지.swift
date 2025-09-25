import Foundation

func solution(_ number: String) -> Int {
    var remainder = 0
    for ch in number {
        if let digit = ch.wholeNumberValue {
            remainder = (remainder + digit) % 9
        }
    }
    return remainder
}

