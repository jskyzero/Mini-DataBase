// 只写了十几行的.js不知道有没有会错意
function add_char(ch) {
    ans = document.getElementById("answer");
    ans.innerHTML = ans.innerHTML + ch; //加字符
}
// 清除输入
function clear_char() {
    ans = document.getElementById("answer");
    ans.innerHTML = ""; // 置空
}
// 算结果，处理异常
function calculater_ans() {
    ans = document.getElementById("answer");
    try { // 尝试算结果
        ans.innerHTML = eval(ans.innerHTML);
    }
    catch (SyntaxError) { //出错就提醒
        alert("ERROR:表达式非法");
    }
}