/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Tractive_System_model/Solver Configuration1'.
 */

#include "ne_std.h"
#include "ne_std_fwd.h"
#include "ssc_dae_fwd.h"
#include "ne_dae_construct.h"
#include "ne_initer_dae.h"
#include "Tractive_System_model_2f85d999_0_initer_idae.h"

SscIniter *Tractive_System_model_2f85d999_0_initer(const NeModelParameters
  *modelParams, const NeSolverParameters *solverParams)
{
  NeSolverParameters ftParams = *solverParams;
  NeDae* idae = NULL;
  ftParams.mUseLocalSolver = false;
  ftParams.mEquationFormulation = NE_TIME_EF;
  Tractive_System_model_2f85d999_0_initer_idae(&idae, modelParams, &ftParams);
  return sec_create_initer(idae, FALSE);
}
