# xbindkeys &
xrdb -merge .Xresources &
wal -R &

# optional, remove if you are not using picom
picom &

slstatus &

exec dwm
