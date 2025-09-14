import Foundation

func solution(_ my_string: String, _ overwrite_string: String, _ s: Int) -> String {
    // 1. 덮어쓰기 전 부분
    let startIndex = my_string.startIndex
    let prefix = my_string[startIndex..<my_string.index(startIndex, offsetBy: s)]
    
    // 2. 덮어쓰기 후 부분
    let afterIndex = my_string.index(startIndex, offsetBy: s + overwrite_string.count)
    let suffix = my_string[afterIndex..<my_string.endIndex]
    
    // 3. 합치기
    let result = prefix + overwrite_string + suffix
    return String(result)
}
