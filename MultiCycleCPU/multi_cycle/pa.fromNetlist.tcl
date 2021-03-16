
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name multi_cycle -dir "D:/multi_cycle/planAhead_run_2" -part xc7k160tffg676-1
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "D:/multi_cycle/top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {D:/multi_cycle} {ipcore_dir} }
add_files [list {ipcore_dir/RAM.ncf}] -fileset [get_property constrset [current_run]]
set_property target_constrs_file "k7.ucf" [current_fileset -constrset]
add_files [list {k7.ucf}] -fileset [get_property constrset [current_run]]
link_design
