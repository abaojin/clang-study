require("config.language")

timeUtil = {}

function timeUtil.formatChatTime(timeStamp, timeStampNow)
    return "11" .. "ss"
end

function timeUtil.formatTime(newTime, flag)
    local hour = math.floor(newTime/3600)
    if hour > 24 and not flag then
        local day = math.floor(hour/24)
        return day .. language["date_day"]
    end

    newTime = newTime%3600
    local min = math.floor(newTime/60)
    local sec = newTime%60
    if hour < 10 then
        hour = "0" .. hour
    end

    if min < 10 then
        min = "0" .. min
    end

    if sec < 10 then
        sec = "0" .. sec
    end

    return hour .. ":" .. min .. ":" .. sec
end