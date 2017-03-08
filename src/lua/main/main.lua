function init()
    package.path = "..\\?.lua"
end

init()

require("main.before")
before.ini_before()
before.end_before()

require("config.config")
config.ini_conf()
config.ini_table()

require("main.after")
after.ini_after()
after.end_after()

require("utils.time_utils")
local t = timeUtil.formatTime(1000000, false)
print(t)




